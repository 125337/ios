@interface HotSearchConfig : NSObject
{
    BOOL _showSubtitle; // +0x8
    int _maxItemCount; // +0xc
    double _clientExpireTime; // +0x10
    NSString * _title; // +0x18
}
- (double)clientExpireTime;
- (void)setClientExpireTime:(double)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (int)maxItemCount;
- (void)setMaxItemCount:(int)arg1;
- (BOOL)showSubtitle;
- (void)setShowSubtitle:(BOOL)arg1;
- (void).cxx_destruct;
@end
