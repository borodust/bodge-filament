;; Generated by :claw at 2022-08-29T19:15:56.769135Z
(uiop:define-package :%filament.extra (:use))
(uiop:define-package :aw-filament-extra-bindings~pristine (:use :cl))
(common-lisp:in-package :aw-filament-extra-bindings~pristine)

(cffi:defcstruct (%filament.extra::pixel-format :size 44)
                 (%filament.extra::red-bits :int :offset 0)
                 (%filament.extra::green-bits :int :offset 4)
                 (%filament.extra::blue-bits :int :offset 8)
                 (%filament.extra::alpha-bits :int :offset 12)
                 (%filament.extra::accum-red-bits :int :offset 16)
                 (%filament.extra::accum-green-bits :int :offset 20)
                 (%filament.extra::accum-blue-bits :int :offset 24)
                 (%filament.extra::accum-alpha-bits :int :offset 28)
                 (%filament.extra::buffer-bits :int :offset 32)
                 (%filament.extra::depth-bits :int :offset 36)
                 (%filament.extra::stencil-bits :int :offset 40))

(declaim (inline %filament.extra::select-pixel-format))

(cffi:defcfun ("aw_filament_select_pixel_format"
               %filament.extra::select-pixel-format)
              :int
              (%filament.extra::pf
               (:pointer (:struct %filament.extra::pixel-format))))

(eval-when (:load-toplevel :compile-toplevel :execute)
  (export '%filament.extra::alpha-bits :%filament.extra)
  (export '%filament.extra::depth-bits :%filament.extra)
  (export '%filament.extra::select-pixel-format :%filament.extra)
  (export '%filament.extra::pixel-format :%filament.extra)
  (export '%filament.extra::red-bits :%filament.extra)
  (export '%filament.extra::accum-green-bits :%filament.extra)
  (export '%filament.extra::accum-blue-bits :%filament.extra)
  (export '%filament.extra::accum-red-bits :%filament.extra)
  (export '%filament.extra::accum-alpha-bits :%filament.extra)
  (export '%filament.extra::stencil-bits :%filament.extra)
  (export '%filament.extra::blue-bits :%filament.extra)
  (export '%filament.extra::green-bits :%filament.extra)
  (export '%filament.extra::buffer-bits :%filament.extra))

