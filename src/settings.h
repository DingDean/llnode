#ifndef SRC_SETTINGS_H
#define SRC_SETTINGS_H

#include <string>

namespace llnode {

// Use singleton pattern to avoid multiples instatiations
// of Settings
class Settings {
 private:
  static Settings instance;

  // Private constructors to prevent instantiations
  Settings();
  ~Settings();
  Settings(const Settings&) = delete;

  // Override assignment operator to avoid copies
  Settings& operator=(const Settings&) = delete;

  std::string color = "auto";

 public:
  static Settings* GetSettings();
  std::string SetColor(std::string option);
  std::string GetColor() { return color; };
  bool ShouldUseColor();
};

}  // namespace llnode
#endif  // SRC_SETTINGS_H
