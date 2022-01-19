;; Generated by :claw at 2022-01-19T20:20:25.767033Z
(asdf:defsystem #:aw-filament-imgui-bindings
  :description "Bindings generated by aw-filament-imgui"
  :author "CLAW"
  :license "Public domain"
  :defsystem-depends-on (:trivial-features)
  :depends-on (:uiop :cffi :iffi :claw-utils)
  :components
  ((:file "bindings/imgui/x86_64-pc-linux-gnu" :if-feature
    (:and :x86-64 :linux))
   (:file "bindings/imgui/aarch64-linux-android" :if-feature
    (:and :aarch64 :android))
   (:file "bindings/imgui/x86_64-w64-mingw32" :if-feature
    (:and :x86-64 :windows))))
#-(:or (:and :x86-64 :windows)(:and :aarch64 :android)(:and :x86-64 :linux))
(warn "Current platform unrecognized or unsupported by aw-filament-imgui-bindings system")