@interface _TtC6WeChat16MagicSclFrameSet : NSObject
{
    void * name; // +0x8
    void * frameSetId; // +0x18
    long long viewId; // +0x28
    long long width; // +0x30
    long long height; // +0x38
    BOOL attached; // +0x40
    BOOL recycled; // +0x41
    BOOL bound; // +0x42
    BOOL inited; // +0x43
    void * frameSetRoot; // +0x48
    void * containerView; // +0x50
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
- (BOOL)attached;
- (void)setAttached:(BOOL)arg1;
- (BOOL)recycled;
- (void)setRecycled:(BOOL)arg1;
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
- (void)recycle;
- (void)restore;
- (void)redraw;
- (void)resize;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end
