@interface TPStrategyConfig : NSObject
{
    long long _decoderStrategy; // +0x8
    NSArray * _playerTypeList; // +0x10
    long long _playerScene; // +0x18
}
+ (id)configWithParams:(id)arg1;
- (long long)decoderStrategy;
- (void)setDecoderStrategy:(long long)arg1;
- (id)playerTypeList;
- (void)setPlayerTypeList:(id)arg1;
- (long long)playerScene;
- (void)setPlayerScene:(long long)arg1;
- (void).cxx_destruct;
@end
