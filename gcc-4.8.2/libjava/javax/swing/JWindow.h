
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_JWindow__
#define __javax_swing_JWindow__

#pragma interface

#include <java/awt/Window.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Component;
        class Container;
        class Dimension;
        class Frame;
        class Graphics;
        class GraphicsConfiguration;
        class LayoutManager;
        class Window;
      namespace event
      {
          class KeyEvent;
      }
    }
  }
  namespace javax
  {
    namespace accessibility
    {
        class AccessibleContext;
    }
    namespace swing
    {
        class JLayeredPane;
        class JRootPane;
        class JWindow;
    }
  }
}

class javax::swing::JWindow : public ::java::awt::Window
{

public:
  JWindow();
  JWindow(::java::awt::GraphicsConfiguration *);
  JWindow(::java::awt::Frame *);
  JWindow(::java::awt::Window *);
  JWindow(::java::awt::Window *, ::java::awt::GraphicsConfiguration *);
public: // actually protected
  virtual void windowInit();
public:
  virtual ::java::awt::Dimension * getPreferredSize();
  virtual void setLayout(::java::awt::LayoutManager *);
  virtual void setLayeredPane(::javax::swing::JLayeredPane *);
  virtual ::javax::swing::JLayeredPane * getLayeredPane();
  virtual ::javax::swing::JRootPane * getRootPane();
public: // actually protected
  virtual void setRootPane(::javax::swing::JRootPane *);
  virtual ::javax::swing::JRootPane * createRootPane();
public:
  virtual ::java::awt::Container * getContentPane();
  virtual void setContentPane(::java::awt::Container *);
  virtual ::java::awt::Component * getGlassPane();
  virtual void setGlassPane(::java::awt::Component *);
public: // actually protected
  virtual void addImpl(::java::awt::Component *, ::java::lang::Object *, jint);
public:
  virtual void remove(::java::awt::Component *);
public: // actually protected
  virtual jboolean isRootPaneCheckingEnabled();
  virtual void setRootPaneCheckingEnabled(jboolean);
public:
  virtual void update(::java::awt::Graphics *);
public: // actually protected
  virtual void processKeyEvent(::java::awt::event::KeyEvent *);
public:
  virtual ::javax::accessibility::AccessibleContext * getAccessibleContext();
public: // actually protected
  virtual ::java::lang::String * paramString();
private:
  static const jlong serialVersionUID = 5420698392125238833LL;
public: // actually protected
  ::javax::swing::JRootPane * __attribute__((aligned(__alignof__( ::java::awt::Window)))) rootPane;
  jboolean rootPaneCheckingEnabled;
  ::javax::accessibility::AccessibleContext * accessibleContext;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_JWindow__
