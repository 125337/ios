@interface FavoritesItem : FavoritesModel
{
    NSMutableArray * _dataList; // +0x8
    NSMutableArray * _tagList; // +0x10
    NSString * _sourceId; // +0x18
    NSString * _toUsr; // +0x20
    BOOL _uploadFailButtomShow; // +0x28
    BOOL _uploadFailButtomClicked; // +0x29
    BOOL _isFromFavToChat; // +0x2a
    unsigned int _favId; // +0x2c
    unsigned int _localId; // +0x30
    int _localStatus; // +0x34
    int _type; // +0x38
    int _sourceType; // +0x3c
    unsigned int _updateTime; // +0x40
    unsigned int _srcCreateTime; // +0x44
    unsigned int _version; // +0x48
    unsigned int _updateSeq; // +0x4c
    unsigned int _localUpdateSeq; // +0x50
    unsigned int _editTime; // +0x54
    unsigned int _ctrlFlag; // +0x58
    unsigned int _usedTimes; // +0x5c
    int _retryTimes; // +0x60
    unsigned int _webCacheStatus; // +0x64
    unsigned int _m_preMsgIndex; // +0x68
    int _isChatRoom; // +0x6c
    unsigned int _m_uiFromScene; // +0x70
    NSString * _favCheckId; // +0x78
    NSString * _deviceid; // +0x80
    NSString * _title; // +0x88
    NSString * _desc; // +0x90
    NSString * _link; // +0x98
    NSString * _fromUsr; // +0xa0
    NSString * _realChatName; // +0xa8
    NSString * _editUsr; // +0xb0
    long long _n64MsgID; // +0xb8
    NSString * _eventId; // +0xc0
    NSString * _appId; // +0xc8
    NSString * _brandId; // +0xd0
    unsigned long long _totalDataSize; // +0xd8
    FavLocationItem * _locItem; // +0xe0
    FavURLItem * _urlItem; // +0xe8
    FavProductItem * _productItem; // +0xf0
    FavTVItem * _tvItem; // +0xf8
    FavWeAppItem * _weAppItem; // +0x100
    NSArray * _tagIdList; // +0x108
    NSDate * _startUploadTime; // +0x110
    double _cellHeight; // +0x118
    NSString * _searchText; // +0x120
    WCFinderShareToMomentsItem * _finderShareItem; // +0x128
    WCMegaVideoShareItem * _finderLongVideoShareItem; // +0x130
    WCFinderLiveShareItem * _finderLiveShareItem; // +0x138
    WCFinderThemeLiveStreamShareItem * _finderThemeLiveShareItem; // +0x140
    WCFinderMessageShareNameCard * _finderShareNameCard; // +0x148
    WCFinderTopicShareItem * _finderTopicShareItem; // +0x150
    WCFinderCollectionShareItem * _finderCollectionShareItem; // +0x158
    WCFinderContentColumnSharedItem * _finderContentColumnSharedItem; // +0x160
    NSString * _transferInfo; // +0x168
    MMMusicShareItem * _musicShareItem; // +0x170
    FavLiteAppItem * _liteAppItem; // +0x178
    NSString * _info; // +0x180
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (id)xmlTagPreProcesslistForConfigTag:(id)arg1;
+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
+ (id)modelPropertyWhitelistForConfigTag:(id)arg1;
+ (id)xmlAttributePropertylistForConfigTag:(id)arg1;
+ (BOOL)ParseItemXML:(id)arg1 ToItem:(id)arg2;
+ (id)FavritesItemToXML:(id)arg1;
+ (BOOL)ParseRecordItemXML:(id)arg1 ToItem:(id)arg2 WithMsg:(id)arg3;
+ (id)RecordItemToXML:(id)arg1 innerType:(unsigned int)arg2;
+ (id)WCParseDataListFromXmlNode:(XmlReaderNode_t *)arg1;
+ (id)WCDataListToXML:(id)arg1;
+ (id)replacePathPrefix:(id)arg1;
+ (id)getMusicInfoFromFavItem:(id)arg1;
- (void)ftsSearchTitle:(id *)arg1 ftsSearchDetail:(id *)arg2 forDisplay:(BOOL)arg3;
- (id)ftsDisplayPrefix;
- (id)ftsDisplayImageView;
- (id)fts5FavModelForDisplay:(BOOL)arg1;
- (id)fts5RowidItemWithRowid:(long long)arg1;
- (int)searchSubTypes;
- (id)favCheckId;
- (id)init;
- (id)initWithAddFavItem:(id)arg1;
- (void)addData:(id)arg1 Index:(int)arg2;
- (BOOL)dataHasBeenCopyedToTarget;
- (BOOL)canAutoDownload;
- (unsigned long long)itemTotalDataSize;
- (BOOL)hasCDNData;
- (BOOL)isRecordItem;
- (BOOL)isFromMessage;
- (BOOL)isEditable;
- (id)getFirstMediaData;
- (id)canBeForwardWithMsg;
- (id)sourceUserName;
- (unsigned int)sourceTime;
- (id)summaryInfo;
- (int)checkIllegalTypeBeforeForwardInDataList:(id)arg1;
- (BOOL)checkNeedDownloadDataBeforeForward;
- (BOOL)canBeForward;
- (BOOL)needUpload;
- (BOOL)isUploading;
- (BOOL)isUploadFail;
- (BOOL)needDownLoad;
- (BOOL)needExportAsset;
- (BOOL)chectNeedDownload;
- (void)enumerateDataUsingBlock:(id /* block */)arg1;
- (BOOL)enumerateDataIn:(id)arg1 UsingBlock:(id /* block */)arg2;
- (void)enumerateFullDataUsingBlock:(id /* block */)arg1;
- (BOOL)enumerateFullDataIn:(id)arg1 InDeep:(int)arg2 UsingBlock:(id /* block */)arg3;
- (id)getDataByLocalDataId:(id)arg1;
- (id)getAllTags;
- (BOOL)isEqualToItem:(id)arg1;
- (id)tingListenItem;
- (id)tingCategoryItem;
- (id)dataList;
- (void)setDataList:(id)arg1;
- (unsigned int)favId;
- (void)setFavId:(unsigned int)arg1;
- (unsigned int)localId;
- (void)setLocalId:(unsigned int)arg1;
- (id)sourceId;
- (void)setSourceId:(id)arg1;
- (void)setFavCheckId:(id)arg1;
- (int)localStatus;
- (void)setLocalStatus:(int)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (int)sourceType;
- (void)setSourceType:(int)arg1;
- (unsigned int)updateTime;
- (void)setUpdateTime:(unsigned int)arg1;
- (unsigned int)srcCreateTime;
- (void)setSrcCreateTime:(unsigned int)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (id)deviceid;
- (void)setDeviceid:(id)arg1;
- (unsigned int)updateSeq;
- (void)setUpdateSeq:(unsigned int)arg1;
- (unsigned int)localUpdateSeq;
- (void)setLocalUpdateSeq:(unsigned int)arg1;
- (unsigned int)editTime;
- (void)setEditTime:(unsigned int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)link;
- (void)setLink:(id)arg1;
- (unsigned int)ctrlFlag;
- (void)setCtrlFlag:(unsigned int)arg1;
- (id)fromUsr;
- (void)setFromUsr:(id)arg1;
- (id)realChatName;
- (void)setRealChatName:(id)arg1;
- (id)toUsr;
- (void)setToUsr:(id)arg1;
- (id)editUsr;
- (void)setEditUsr:(id)arg1;
- (long long)n64MsgID;
- (void)setN64MsgID:(long long)arg1;
- (id)eventId;
- (void)setEventId:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)brandId;
- (void)setBrandId:(id)arg1;
- (unsigned long long)totalDataSize;
- (void)setTotalDataSize:(unsigned long long)arg1;
- (id)locItem;
- (void)setLocItem:(id)arg1;
- (id)urlItem;
- (void)setUrlItem:(id)arg1;
- (id)productItem;
- (void)setProductItem:(id)arg1;
- (id)tvItem;
- (void)setTvItem:(id)arg1;
- (id)weAppItem;
- (void)setWeAppItem:(id)arg1;
- (id)tagList;
- (void)setTagList:(id)arg1;
- (id)tagIdList;
- (void)setTagIdList:(id)arg1;
- (unsigned int)usedTimes;
- (void)setUsedTimes:(unsigned int)arg1;
- (int)retryTimes;
- (void)setRetryTimes:(int)arg1;
- (id)startUploadTime;
- (void)setStartUploadTime:(id)arg1;
- (double)cellHeight;
- (void)setCellHeight:(double)arg1;
- (BOOL)uploadFailButtomShow;
- (void)setUploadFailButtomShow:(BOOL)arg1;
- (BOOL)uploadFailButtomClicked;
- (void)setUploadFailButtomClicked:(BOOL)arg1;
- (unsigned int)webCacheStatus;
- (void)setWebCacheStatus:(unsigned int)arg1;
- (id)searchText;
- (void)setSearchText:(id)arg1;
- (unsigned int)m_preMsgIndex;
- (void)setM_preMsgIndex:(unsigned int)arg1;
- (int)isChatRoom;
- (void)setIsChatRoom:(int)arg1;
- (unsigned int)m_uiFromScene;
- (void)setM_uiFromScene:(unsigned int)arg1;
- (BOOL)isFromFavToChat;
- (void)setIsFromFavToChat:(BOOL)arg1;
- (id)finderShareItem;
- (void)setFinderShareItem:(id)arg1;
- (id)finderLongVideoShareItem;
- (void)setFinderLongVideoShareItem:(id)arg1;
- (id)finderLiveShareItem;
- (void)setFinderLiveShareItem:(id)arg1;
- (id)finderThemeLiveShareItem;
- (void)setFinderThemeLiveShareItem:(id)arg1;
- (id)finderShareNameCard;
- (void)setFinderShareNameCard:(id)arg1;
- (id)finderTopicShareItem;
- (void)setFinderTopicShareItem:(id)arg1;
- (id)finderCollectionShareItem;
- (void)setFinderCollectionShareItem:(id)arg1;
- (id)finderContentColumnSharedItem;
- (void)setFinderContentColumnSharedItem:(id)arg1;
- (id)transferInfo;
- (void)setTransferInfo:(id)arg1;
- (id)musicShareItem;
- (void)setMusicShareItem:(id)arg1;
- (id)liteAppItem;
- (void)setLiteAppItem:(id)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (void).cxx_destruct;
@end
