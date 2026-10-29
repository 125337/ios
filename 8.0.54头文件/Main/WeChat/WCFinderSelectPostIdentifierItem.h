@interface WCFinderSelectPostIdentifierItem : NSObject
{
    BOOL _selected; // +0x8
    BOOL _hidenMentionView; // +0x9
    WCFinderContact * _contact; // +0x10
    PrepareFinder * _prepare; // +0x18
    NSString * _relatedUsername; // +0x20
}
- (id)checkLabelText;
- (id)contact;
- (void)setContact:(id)arg1;
- (BOOL)selected;
- (void)setSelected:(BOOL)arg1;
- (id)prepare;
- (void)setPrepare:(id)arg1;
- (id)relatedUsername;
- (void)setRelatedUsername:(id)arg1;
- (BOOL)hidenMentionView;
- (void)setHidenMentionView:(BOOL)arg1;
- (void).cxx_destruct;
@end

