@interface GetMessageFromWXResp : BaseResp
{
    BOOL bText; // +0x18
    NSString * text; // +0x20
    WXMediaMessage * message; // +0x28
}
- (id)init;
- (id)text;
- (void)setText:(id)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (BOOL)bText;
- (void)setBText:(BOOL)arg1;
- (void).cxx_destruct;
@end
