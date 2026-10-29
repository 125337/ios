@interface FTSStatHelper : MMObject
+ (void)clean;
+ (void)startLoadHtml;
+ (void)finishLoadHtml:(id)arg1;
+ (void)startRequestJson:(id)arg1;
+ (void)endRequestJson:(id)arg1;
+ (void)startRequestRes:(id)arg1;
+ (void)syncRecvRes:(id)arg1;
+ (void)asyncRecvRes:(id)arg1;
+ (void)failRecvRes:(id)arg1;
@end

