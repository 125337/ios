@interface OMJCamOptionResult : NSObject
{
    NSString * _md5String; // +0x8
    NSArray * _layerRenderResults; // +0x10
}
- (id)initWithMD5String:(id)arg1 layerRenderResults:(id)arg2;
- (id)md5String;
- (id)layerRenderResults;
- (void).cxx_destruct;
@end
