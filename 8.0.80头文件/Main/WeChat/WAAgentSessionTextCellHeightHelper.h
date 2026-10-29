@interface WAAgentSessionTextCellHeightHelper : NSObject <CBTStreamMDParseLogicDelegate>
{
    NSMutableAttributedString * _content; // +0x8
}
- (id)init;
- (void)onGeneratedContent:(id)arg1;
- (void)onParseFinished;
- (id)content;
- (void)setContent:(id)arg1;
- (void).cxx_destruct;
@end
