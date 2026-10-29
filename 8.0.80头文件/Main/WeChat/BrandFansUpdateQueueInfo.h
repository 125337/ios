@interface BrandFansUpdateQueueInfo : NSObject
{
    int _bizType; // +0x8
    NSMutableArray * _usernames; // +0x10
}
- (id)init;
- (id)usernames;
- (void)setUsernames:(id)arg1;
- (int)bizType;
- (void)setBizType:(int)arg1;
- (void).cxx_destruct;
@end
