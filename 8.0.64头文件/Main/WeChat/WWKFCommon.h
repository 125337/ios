@interface WWKFCommon : NSObject
+ (BOOL)shouldTheWWKFFlowPerformShowErrAlert:(int)arg1;
+ (BOOL)shouldTheWWKFFlowPerformAddContact:(unsigned int)arg1;
+ (BOOL)shouldTheWWKFFlowConfirmToAddContact:(unsigned int)arg1;
+ (BOOL)shouldTheWWKFFlowConfirmInHalfScreen:(unsigned int)arg1;
+ (BOOL)shouldTheWWKFFlowPushMsgVCWithMovingToMainFrame:(unsigned int)arg1;
+ (long long)contactUpdateMinInterval;
@end
