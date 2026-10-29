@interface TRTCMixUser : NSObject
{
    BOOL _pureAudio; // +0x8
    int _zOrder; // +0xc
    int _renderMode; // +0x10
    NSString * _userId; // +0x18
    NSString * _roomID; // +0x20
    long long _streamType; // +0x28
    unsigned long long _inputType; // +0x30
    NSString * _image; // +0x38
    CGRect _rect; // +0x40
}
- (MixedUserConfig)convertToCppParams;
- (int)convertInputType:(unsigned long long)arg1;
- (id)init;
- (id)userId;
- (void)setUserId:(id)arg1;
- (id)roomID;
- (void)setRoomID:(id)arg1;
- (CGRect)rect;
- (void)setRect:(CGRect)arg1;
- (int)zOrder;
- (void)setZOrder:(int)arg1;
- (long long)streamType;
- (void)setStreamType:(long long)arg1;
- (BOOL)pureAudio;
- (void)setPureAudio:(BOOL)arg1;
- (unsigned long long)inputType;
- (void)setInputType:(unsigned long long)arg1;
- (int)renderMode;
- (void)setRenderMode:(int)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (void).cxx_destruct;
@end

