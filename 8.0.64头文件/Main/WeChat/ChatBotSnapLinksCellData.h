@interface ChatBotSnapLinksCellData : NSObject
{
    unsigned int _cellType; // +0x8
    unsigned int _time; // +0xc
    NSString * _originName; // +0x10
    NSMutableArray * _snapshotArray; // +0x18
    MiniTaskCollectionCellViewModel * _miniTaskCellVM; // +0x20
}
- (BOOL)isMsgStar;
- (unsigned int)cellType;
- (void)setCellType:(unsigned int)arg1;
- (unsigned int)time;
- (void)setTime:(unsigned int)arg1;
- (id)originName;
- (void)setOriginName:(id)arg1;
- (id)snapshotArray;
- (void)setSnapshotArray:(id)arg1;
- (id)miniTaskCellVM;
- (void)setMiniTaskCellVM:(id)arg1;
- (void).cxx_destruct;
@end
