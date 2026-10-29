@interface _TtC6WeChat16MagicSclFrameSet : NSObject
{
     name; // +0x8
     frameSetId; // +0x18
     viewId; // +0x28
     width; // +0x30
     height; // +0x38
     attached; // +0x40
     bound; // +0x41
     inited; // +0x42
     frameSetRoot; // +0x48
     containerView; // +0x50
     preloadScene; // +0x58
     layoutCallback; // +0x60
     sizeChangeCallback; // +0x70
     attachChangeCallback; // +0x80
}
- (id)name;
- (id)frameSetId;
- (long long)viewId;
- (void)setViewId:(long long)arg1;
- (long long)width;
- (void)setWidth:(long long)arg1;
- (long long)height;
- (void)setHeight:(long long)arg1;
- (BOOL)bound;
- (void)setBound:(BOOL)arg1;
- (BOOL)inited;
- (void)setInited:(BOOL)arg1;
- (id)frameSetRoot;
- (void)setFrameSetRoot:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (void)initFrameSet;
- (void)updateContainerWithView:(id)arg1;
- (void)bind;
- (void)unbind;
- (void)attach;
- (void)detach;
- (void)redraw;
- (void)resize;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end

