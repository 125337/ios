@interface WxpayTextRange : UITextRange
{
    WxpayTextPosition * _rangeStart; // +0x8
    WxpayTextPosition * _rangeEnd; // +0x10
}
+ (id)rangeWithStart:(long long)arg1 end:(long long)arg2;
- (id)start;
- (id)end;
- (BOOL)isEmpty;
- (id)rangeStart;
- (void)setRangeStart:(id)arg1;
- (id)rangeEnd;
- (void)setRangeEnd:(id)arg1;
- (void).cxx_destruct;
@end
