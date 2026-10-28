@interface WCCardFollowBoxInfo : MMObject
{
    NSString * _text; // +0x8
    long long _follow; // +0x10
}
- (id)text;
- (void)setText:(id)arg1;
- (long long)follow;
- (void)setFollow:(long long)arg1;
- (void).cxx_destruct;
@end
