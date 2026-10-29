@interface WCOutFeedbackResItem : NSObject
{
    int _resID; // +0x8
    NSString * _resContent; // +0x10
}
- (int)resID;
- (void)setResID:(int)arg1;
- (id)resContent;
- (void)setResContent:(id)arg1;
- (void).cxx_destruct;
@end

