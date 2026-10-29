@interface BTLMsgInsertConfig : NSObject
{
    BOOL _createNewGroup; // +0x8
    BOOL _topContact; // +0x9
    BOOL _canInsertToOldGroup; // +0xa
    BOOL _updateDividerLine; // +0xb
    int _atPos; // +0xc
    unsigned int _groupId; // +0x10
    int _predict; // +0x14
    unsigned int _limitMaxWeight; // +0x18
    unsigned int _createTime; // +0x1c
}
- (id)init;
- (id)description;
- (BOOL)createNewGroup;
- (void)setCreateNewGroup:(BOOL)arg1;
- (BOOL)topContact;
- (void)setTopContact:(BOOL)arg1;
- (BOOL)canInsertToOldGroup;
- (void)setCanInsertToOldGroup:(BOOL)arg1;
- (BOOL)updateDividerLine;
- (void)setUpdateDividerLine:(BOOL)arg1;
- (int)atPos;
- (void)setAtPos:(int)arg1;
- (unsigned int)groupId;
- (void)setGroupId:(unsigned int)arg1;
- (int)predict;
- (void)setPredict:(int)arg1;
- (unsigned int)limitMaxWeight;
- (void)setLimitMaxWeight:(unsigned int)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
@end

