#pragma once

#include "misc/elapsed.h"
#include "screen_manager.h"
#include "adc_capture_util.h"

class OsciloscopeScreen : public screen_manager::Screen {
 public:
  OsciloscopeScreen() {};
  virtual void setup(uint8_t screen_num) override;
  virtual void on_load() override;
  virtual void loop() override;
  virtual void on_event(ui_events::UiEventId ui_event_id) override;

 private:
  void update_display();
  
  ui::Chart chart_;
  adc_capture_util::AdcCaptureControls adc_capture_controls_;
  ui::ChartAxisConfig y_axis_config_;
};