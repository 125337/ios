@interface WCFinderMemberShipIntroducePlayViewModel : NSObject
{
    int _feedType; // +0x8
    NSMutableArray * _contentVMs; // +0x10
}
- (id)initWithContentVMs:(id)arg1 feedType:(int)arg2 headerData:(id)arg3;
- (id)genNewContentVMs:(id)arg1 feedType:(int)arg2 headerData:(id)arg3;
- (unsigned long long)allDataCount;
- (long long)indexOfTid:(id)arg1;
- (id)contentVMAtIndex:(unsigned long long)arg1;
- (id)contentVMOfTid:(id)arg1;
- (void)deleteContentVM:(id)arg1;
- (int)feedViewControllerScene;
- (id)contentVMs;
- (void)setContentVMs:(id)arg1;
- (int)feedType;
- (void)setFeedType:(int)arg1;
- (void).cxx_destruct;
@end
