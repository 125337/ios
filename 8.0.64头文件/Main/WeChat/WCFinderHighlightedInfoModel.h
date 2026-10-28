@interface WCFinderHighlightedInfoModel : NSObject
{
    NSMutableAttributedString * _attriStr; // +0x8
    NSMutableArray * _topicRangeArray; // +0x10
    NSMutableArray * _mentionArray; // +0x18
    NSMutableArray * _selectBkArray; // +0x20
    NSMutableArray * _clearBkArray; // +0x28
    NSMutableArray * _invalidCharacterArray; // +0x30
}
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)attriStr;
- (void)setAttriStr:(id)arg1;
- (id)topicRangeArray;
- (void)setTopicRangeArray:(id)arg1;
- (id)mentionArray;
- (void)setMentionArray:(id)arg1;
- (id)selectBkArray;
- (void)setSelectBkArray:(id)arg1;
- (id)clearBkArray;
- (void)setClearBkArray:(id)arg1;
- (id)invalidCharacterArray;
- (void)setInvalidCharacterArray:(id)arg1;
- (void).cxx_destruct;
@end
