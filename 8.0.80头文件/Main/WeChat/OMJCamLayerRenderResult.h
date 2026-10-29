@interface OMJCamLayerRenderResult : NSObject
{
    BOOL _controlledByLua; // +0x8
    OMJID * _layerID; // +0x10
    struct _firstRenderTimeStamp; // +0x18
    struct _lastRenderTimeStamp; // +0x30
}
- (id)initWithLayerID:(id)arg1 firstRenderTimeStamp:(struct)arg2 lastRenderTimeStamp:(struct)arg3 controlledByLua:(BOOL)arg4;
- (id)layerID;
- (struct)firstRenderTimeStamp;
- (struct)lastRenderTimeStamp;
- (BOOL)controlledByLua;
- (void).cxx_destruct;
@end
