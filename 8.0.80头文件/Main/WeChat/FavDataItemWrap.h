@interface FavDataItemWrap : RecordNodeDataSource
{
    FavoritesItemDataField * m_dataItem; // +0x8
    FavoritesItem * m_parent; // +0x10
    unsigned int m_index; // +0x18
    NSArray * m_dataList; // +0x20
    BaseMessageViewModel * _messageViewModel; // +0x28
}
- (id)initWithParent:(id)arg1 DataItem:(id)arg2 Index:(unsigned int)arg3;
- (id)initWithParent:(id)arg1 DataItem:(id)arg2 dataList:(id)arg3 Index:(unsigned int)arg4;
- (unsigned long long)getParserType;
- (id)GetParent;
- (id)GetDataItem;
- (id)messageViewModel;
- (unsigned int)GetParentLocalID;
- (unsigned int)GetImageAndVideoIndex;
- (int)GetImageDataDownloadStatus;
- (int)GetParentDownloadStatus;
- (id)GetImgAndVideoArray;
- (id)GetMusicInfo;
- (BOOL)StartDownload;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)parent;
- (void)setParent:(id)arg1;
- (unsigned int)index;
- (void)setIndex:(unsigned int)arg1;
- (void)setMessageViewModel:(id)arg1;
- (void).cxx_destruct;
@end
