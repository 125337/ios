@interface SolitaireJoinReport : SolitaireReport
{
    unsigned int _addCount; // +0x30
    unsigned int _removeCount; // +0x34
    unsigned long long _editScene; // +0x38
    NSString * _nsPunctuation; // +0x40
}
- (void)report;
- (unsigned int)addCount;
- (void)setAddCount:(unsigned int)arg1;
- (unsigned int)removeCount;
- (void)setRemoveCount:(unsigned int)arg1;
- (unsigned long long)editScene;
- (void)setEditScene:(unsigned long long)arg1;
- (id)nsPunctuation;
- (void)setNsPunctuation:(id)arg1;
- (void).cxx_destruct;
@end

