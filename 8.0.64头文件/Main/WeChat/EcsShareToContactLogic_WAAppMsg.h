@interface EcsShareToContactLogic_WAAppMsg : EcsShareToContactLogic_Base
{
    EcsWAAppMessageModel * _model; // +0x8
}
- (id)initWithParams:(id)arg1 extraData:(id)arg2;
- (void)genMessage:(id /* block */)arg1;
- (void)requestShareInfoIfNeededWithCompletion:(id /* block */)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (id)genMessageWrapFromModel:(id)arg1;
- (void)makeSureMessageWrapVaild;
- (id)model;
- (void)setModel:(id)arg1;
- (void).cxx_destruct;
@end
