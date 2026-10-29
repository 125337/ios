@interface TRTCMixUser : NSObject
{
    BOOL _pureAudio; // +0x8
    int _zOrder; // +0xc
    int _renderMode; // +0x10
    int _cornerRadius; // +0x14
    int _soundLevel; // +0x18
    NSString * _userId; // +0x20
    NSString * _roomID; // +0x28
    long long _streamType; // +0x30
    unsigned long long _inputType; // +0x38
    NSString * _image; // +0x40
    CGRect _rect; // +0x48
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
- (int)cornerRadius;
- (void)setCornerRadius:(int)arg1;
- (int)soundLevel;
- (void)setSoundLevel:(int)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (void).cxx_destruct;
@end
