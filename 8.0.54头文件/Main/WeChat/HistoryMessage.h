@interface HistoryMessage : NSObject
{
    float _click_score; // +0x8
    NSString * _msg_id; // +0x10
}
- (id)msg_id;
- (void)setMsg_id:(id)arg1;
- (float)click_score;
- (void)setClick_score:(float)arg1;
- (void).cxx_destruct;
@end

