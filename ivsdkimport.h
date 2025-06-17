#ifndef IVSDKIMPORT_H
#define IVSDKIMPORT_H

/**
Value Engine Imports For SDK
*/
class IVSdkImport{
public:
  IVSdkImport();
  virtual ~IVSdkImport();

  class IValueSdk;
  class IMainFrame;
  class IMain;
  class IMenu;
  class IPanel;
  class ITextBox;
  class IWidget;
  class IButton;
  class ITreeView;
  class IEntity;
  class IRender;
  class IScene;
  class IGrid;
  class IVector;
  class IModel;
  class IFile;
  class IPlane;
  class IFace;
  class IBrush;
  class IBrushCreator;
  class IVolume;
  class IMessage;
  class ICamera;
  class IRenderViewport;
  class IXYGridViewport;
  class IXZGridViewport;
  class IYZGridViewport;
  class IMesh;
  class IShader;
  class IWinding;
  class IPlugin;
  class ITexture;
  class ITextureViewport;
  class ITriggerBox;
  class IClipBox;
  class IZoneBox;

}

#endif
