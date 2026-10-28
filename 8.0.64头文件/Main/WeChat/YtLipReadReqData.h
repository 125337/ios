@interface YtLipReadReqData : NSObject
{
    float _lux; // +0x8
    NSString * _appId; // +0x10
    NSString * _sessionId; // +0x18
    NSString * _version; // +0x20
    NSString * _audio; // +0x28
    NSString * _featureData; // +0x30
    NSString * _lipReadingData; // +0x38
    NSString * _actData; // +0x40
    NSArray * _frameList; // +0x48
    NSArray * _shapeList; // +0x50
    YtExtraOptions * _extraOptions; // +0x58
    NSString * _extraData; // +0x60
    YtFaceFrameInfo * _bestImage; // +0x68
}
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (float)lux;
- (void)setLux:(float)arg1;
- (id)version;
- (void)setVersion:(id)arg1;
- (id)audio;
- (void)setAudio:(id)arg1;
- (id)featureData;
- (void)setFeatureData:(id)arg1;
- (id)lipReadingData;
- (void)setLipReadingData:(id)arg1;
- (id)actData;
- (void)setActData:(id)arg1;
- (id)frameList;
- (void)setFrameList:(id)arg1;
- (id)shapeList;
- (void)setShapeList:(id)arg1;
- (id)extraOptions;
- (void)setExtraOptions:(id)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (id)bestImage;
- (void)setBestImage:(id)arg1;
- (void).cxx_destruct;
@end
