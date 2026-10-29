@interface SendMusicResponse : NSObject
{
    NSString * _userName; // +0x8
}
+ (id)makeWithUserName:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)userName;
- (void)setUserName:(id)arg1;
- (void).cxx_destruct;
@end

