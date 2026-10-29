@interface MsgRecordDataWrap : RecordNodeDataSource <WCPlayerMediaExt>
{
    CMessageWrap * m_parent; // +0x8
    FavoritesItemDataField * m_dataItem; // +0x10
    unsigned int m_index; // +0x18
    NSArray * m_dataList; // +0x20
    NSString * m_desc; // +0x28
    BaseMessageViewModel * _messageViewModel; // +0x30
}
- (id)initWithParent:(id)arg1 DataItem:(id)arg2 Index:(unsigned int)arg3;
- (id)initWithParent:(id)arg1 DataItem:(id)arg2 dataList:(id)arg3 desc:(id)arg4 Index:(unsigned int)arg5;
- (unsigned long long)getParserType;
- (id)Convert2AppFileMsg;
- (id)Convert2VideoInfo;
- (id)GetParent;
- (id)getThumbPathForData:(id)arg1;
- (id)GetDataPath;
- (id)GetThumbPath;
- (id)GetDataItem;
- (id)messageViewModel;
- (unsigned int)GetParentLocalID;
- (unsigned int)GetImageIndex;
- (int)GetImageDataDownloadStatus;
- (int)GetParentDownloadStatus;
- (id)GetImgArray;
- (id)GetMaskImagePath;
- (id)GetMusicInfo;
- (id)GetTempFilePath;
- (BOOL)StartDownload;
- (id)getMediaWrapIdentifier;
- (id)getMediaWrapUrl;
- (id)getTempVideoPath;
- (id)getFormatVideoPath;
- (id)getThumbImagePath;
- (id)m_parent;
- (void)setM_parent:(id)arg1;
- (id)m_dataItem;
- (void)setM_dataItem:(id)arg1;
- (unsigned int)m_index;
- (void)setM_index:(unsigned int)arg1;
- (void)setMessageViewModel:(id)arg1;
- (void).cxx_destruct;
@end

