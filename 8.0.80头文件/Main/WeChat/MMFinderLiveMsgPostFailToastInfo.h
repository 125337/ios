@interface MMFinderLiveMsgPostFailToastInfo : NSObject
{
    BOOL _needShowToast; // +0x8
    NSString * _content; // +0x10
}
- (id)initWithMsgRespToastInfo:(id)arg1;
- (id)initWithAppMsgRespToastInfo:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (BOOL)needShowToast;
- (void)setNeedShowToast:(BOOL)arg1;
- (void).cxx_destruct;
@end
