;; Generated by :claw at 2022-08-28T21:17:06.701989Z
(asdf:defsystem #:aw-filament-extra-bindings
  :description "Bindings generated by aw-filament-extra"
  :author "CLAW"
  :license "Public domain"
  :defsystem-depends-on (:trivial-features)
  :depends-on (:uiop :cffi)
  :components
  ((:file "bindings/extra/x86_64-pc-linux-gnu" :if-feature
    (:and :x86-64 :linux))
   (:file "bindings/extra/aarch64-linux-android" :if-feature
    (:and :aarch64 :android))
   (:file "bindings/extra/x86_64-w64-mingw32" :if-feature
    (:and :x86-64 :windows))))
#-(:or (:and :x86-64 :windows)(:and :aarch64 :android)(:and :x86-64 :linux))
(warn "Current platform unrecognized or unsupported by aw-filament-extra-bindings system")