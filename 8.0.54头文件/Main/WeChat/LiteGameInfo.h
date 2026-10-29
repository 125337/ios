@interface LiteGameInfo : NSObject
{
    NSString * _liteGameName; // +0x8
    NSString * _liteGameIconUrl; // +0x10
    NSString * _liteGameDeveloper; // +0x18
}
- (id)liteGameName;
- (void)setLiteGameName:(id)arg1;
- (id)liteGameIconUrl;
- (void)setLiteGameIconUrl:(id)arg1;
- (id)liteGameDeveloper;
- (void)setLiteGameDeveloper:(id)arg1;
- (void).cxx_destruct;
@end

