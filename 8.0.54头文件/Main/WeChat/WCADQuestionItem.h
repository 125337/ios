@interface WCADQuestionItem : MMObject
{
    unsigned int actionType; // +0x8
    NSString * itemId; // +0x10
    NSString * wording; // +0x18
}
- (id)itemId;
- (void)setItemId:(id)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (unsigned int)actionType;
- (void)setActionType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

