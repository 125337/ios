@interface MPPageFastLoadWXPicDecoder : NSObject
{
    NSString * _sceneTag; // +0x8
    unsigned long long _sceneType; // +0x10
}
+ (id)fallbackContentType;
- (id)initWithSceneTag:(id)arg1;
- (id)initWithSceneTag:(id)arg1 sceneType:(unsigned long long)arg2;
- (BOOL)isWxPicData:(id)arg1;
- (id)decodePossibleWxPic:(id)arg1 withImageType:(id)arg2 error:(id *)arg3;
- (id)psdkDecodePossibleWxPic:(id)arg1 withImageType:(id)arg2 error:(id *)arg3;
- (int)convertPicType:(id)arg1;
- (id)contentTypeForData:(id)arg1;
- (id)sceneTag;
- (void)setSceneTag:(id)arg1;
- (unsigned long long)sceneType;
- (void)setSceneType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
