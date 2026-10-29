@interface WAAgentSessionViewModel : NSObject
{
    NSString * _sessionId; // +0x8
    NSMutableArray * _cellViewModels; // +0x10
}
+ (id)viewModelWithSessionId:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)cellViewModels;
- (void)setCellViewModels:(id)arg1;
- (void).cxx_destruct;
@end
