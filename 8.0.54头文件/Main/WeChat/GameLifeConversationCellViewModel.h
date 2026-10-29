@interface GameLifeConversationCellViewModel : NSObject
{
    GameLifeConversationCell * _cell; // +0x8
    GameLifeConversation * _conversation; // +0x10
    MMBaseSessionCellData * _cellData; // +0x18
}
+ (id)cellDataForConversation:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setupHistoryCellData:(id)arg1;
- (void)setCell:(id)arg1;
- (id)cell;
- (id)conversation;
- (id)cellData;
- (void)setCellData:(id)arg1;
- (void).cxx_destruct;
@end

