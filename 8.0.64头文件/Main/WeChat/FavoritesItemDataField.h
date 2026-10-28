@interface FavoritesItemDataField : FavoritesModel <RTEAttachmentNativeItemBase>
{
    BOOL _isNeedUploadRawData; // +0x8
    BOOL _isSmallImage; // +0x9
    BOOL _isFromSingleMessage; // +0xa
    int _dataType; // +0xc
    unsigned int _subType; // +0x10
    int _cdnThumbFileType; // +0x14
    int _cdnDataFileType; // +0x18
    int _cdnMiddleDataFileType; // +0x1c
    unsigned int _duration; // +0x20
    int _dataStatus; // +0x24
    int _illegalType; // +0x28
    int _isChatRoom; // +0x2c
    unsigned int _srcMsgLocalId; // +0x30
    unsigned int _srcMsgCreateTime; // +0x34
    NSString * _dataFmt; // +0x38
    NSString * _dataSourceId; // +0x40
    NSString * _dataId; // +0x48
    NSString * _htmlId; // +0x50
    NSString * _dataTitle; // +0x58
    NSString * _dataDesc; // +0x60
    NSString * _cdnThumbUrl; // +0x68
    NSString * _cdnThumbKey; // +0x70
    NSString * _cdnDataUrl; // +0x78
    NSString * _cdnDataKey; // +0x80
    unsigned long long _middleDataSize; // +0x88
    NSString * _middleDataMd5; // +0x90
    NSString * _cdnMiddleDataUrl; // +0x98
    NSString * _cdnMiddleDataKey; // +0xa0
    NSString * _assetID; // +0xa8
    double _thumbWidth; // +0xb0
    double _thumbHeight; // +0xb8
    unsigned long long _thumbSize; // +0xc0
    unsigned long long _dataSize; // +0xc8
    NSString * _streamWebUrl; // +0xd0
    NSString * _streamDataUrl; // +0xd8
    NSString * _streamLowbandUrl; // +0xe0
    NSString * _songLyric; // +0xe8
    NSString * _songAlbumUrl; // +0xf0
    NSString * _appId; // +0xf8
    NSString * _dataExt; // +0x100
    NSString * _streamId; // +0x108
    NSString * _thumbMd5; // +0x110
    NSString * _thumbHead256Md5; // +0x118
    NSString * _dataMd5; // +0x120
    NSString * _dataHead256Md5; // +0x128
    NSString * _sourceThumbPath; // +0x130
    NSString * _sourceDataPath; // +0x138
    NSString * _sourceMiddleDataPath; // +0x140
    NSString * _dataSrcName; // +0x148
    NSString * _dataSrcNamePost; // +0x150
    NSString * _dataSrcHeadUrl; // +0x158
    NSString * _dataSrcTime; // +0x160
    FavoritesDataItemSource * _dataSrc; // +0x168
    FavLocationItem * _locItem; // +0x170
    FavURLItem * _urlItem; // +0x178
    FavProductItem * _productItem; // +0x180
    FavTVItem * _tvItem; // +0x188
    double _nodeHeight; // +0x190
    FavStreamVideoItem * _streamVideoItem; // +0x198
    NSString * _statExtStr; // +0x1a0
    NSString * _canvasPageXml; // +0x1a8
    NSString * _srcChatName; // +0x1b0
    long long _srcMsgSvrId; // +0x1b8
    NSString * _srcMsgContent; // +0x1c0
    NSArray * _dataList; // +0x1c8
    FavWeAppItem * _weAppItem; // +0x1d0
    FavBrandMpVideoItem * _favBrandMpVideoItem; // +0x1d8
    FavEmoticonItem * _emojiItem; // +0x1e0
    NSString * _authkey; // +0x1e8
    NSString * _messageUUID; // +0x1f0
    WCFinderShareToMomentsItem * _finderShareItem; // +0x1f8
    WCMegaVideoShareItem * _finderLongVideoShareItem; // +0x200
    WCFinderLiveShareItem * _finderLiveShareItem; // +0x208
    WCFinderThemeLiveStreamShareItem * _finderThemeLiveShareItem; // +0x210
    WCFinderMessageShareNameCard * _finderShareNameCard; // +0x218
    WCFinderTopicShareItem * _finderTopicShareItem; // +0x220
    WCFinderCollectionShareItem * _finderCollectionShareItem; // +0x228
    WCFinderContentColumnSharedItem * _finderContentColumnSharedItem; // +0x230
    WCFinderLiveShopWindowShareItem * _finderShopWindowShare; // +0x238
    WCFinderLiveProductShareItem * _finderProductShare; // +0x240
    MMMusicShareItem * _musicShareItem; // +0x248
    TingShareListenItem * _tingListenItem; // +0x250
    TingShareCategoryItem * _tingCategoryItem; // +0x258
    FavReferMsgItem * _referMsgItem; // +0x260
    LiteAppSharedItem * _liteAppSharedItem; // +0x268
    FavoritesLivePhoto * _livePhoto; // +0x270
    NSString * _link; // +0x278
    NSString * _brandId; // +0x280
    NSString * _tpThumbUrl; // +0x288
    NSString * _tpThumbAeskey; // +0x290
    NSString * _tpDataUrl; // +0x298
    NSString * _tpAesKey; // +0x2a0
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
+ (id)modelPropertyWhitelistForConfigTag:(id)arg1;
+ (id)xmlAttributePropertylistForConfigTag:(id)arg1;
+ (id)xmlTagPreProcesslistForConfigTag:(id)arg1;
+ (id)configWithImage:(id)arg1;
+ (id)configWithGifData:(id)arg1;
+ (id)configWithVideoPath:(id)arg1 thumbPath:(id)arg2 duration:(unsigned int)arg3;
+ (id)configWithVideoData:(id)arg1 format:(id)arg2;
+ (id)configWithFilePath:(id)arg1 fileName:(id)arg2;
+ (id)configWithAsset:(id)arg1 completion:(id /* block */)arg2;
+ (id)configWithLocation:(id)arg1;
+ (id)GetMusicInfo:(id)arg1 bNewMvMsg:(BOOL)arg2;
- (id)toMsgWrap;
- (id)zidlInstance;
- (id)getTitle;
- (id)getDesc;
- (int)getAttachmentType;
- (id)getAttachmentId;
- (id)getDisplayThumbPath;
- (float)getVoiceDuration;
- (BOOL)isRecording;
- (int)getDataType;
- (id)ftsStringforRecord:(BOOL)arg1 forDisplay:(BOOL)arg2;
- (id)GetDataPathForFav;
- (id)GetThumbPathForFav;
- (id)GetThumbPath;
- (id)GetThumbMaskPath;
- (id)GetDataPath;
- (id)thumbPathForDisplay;
- (id)middlePathForDisplay;
- (id)dataPathForDisplay;
- (id)GetMiddleDataPath;
- (id)Get3rdAppThumbDataTempPath;
- (id)Get3rdAppFileDataTempPath;
- (id)GetLivePhotoVideoPath;
- (id)getThumbImage;
- (id)GetSenderUsername;
- (BOOL)IsSameSenderWithData:(id)arg1;
- (id)streamWebUrl;
- (void)clearFileInfo;
- (id)GenFavItemDataClientIDWithIndex:(int)arg1;
- (BOOL)hasThumbForItem;
- (BOOL)hasNoDataOrThumb;
- (BOOL)hasDataOrThumb;
- (BOOL)hasData;
- (BOOL)hasThumb;
- (BOOL)hasOnlyThumb;
- (BOOL)needUploadThumb;
- (BOOL)needUploadData;
- (BOOL)needDownloadThumb;
- (BOOL)needDownloadData;
- (BOOL)isLivePhoto;
- (BOOL)isNestedMediaType;
- (id)translateInfo;
- (id)copyAsFavoritesItemDataField;
- (int)dataType;
- (void)setDataType:(int)arg1;
- (unsigned int)subType;
- (void)setSubType:(unsigned int)arg1;
- (id)dataFmt;
- (void)setDataFmt:(id)arg1;
- (id)dataSourceId;
- (void)setDataSourceId:(id)arg1;
- (id)dataId;
- (void)setDataId:(id)arg1;
- (id)htmlId;
- (void)setHtmlId:(id)arg1;
- (id)dataTitle;
- (void)setDataTitle:(id)arg1;
- (id)dataDesc;
- (void)setDataDesc:(id)arg1;
- (int)cdnThumbFileType;
- (void)setCdnThumbFileType:(int)arg1;
- (id)cdnThumbUrl;
- (void)setCdnThumbUrl:(id)arg1;
- (id)cdnThumbKey;
- (void)setCdnThumbKey:(id)arg1;
- (int)cdnDataFileType;
- (void)setCdnDataFileType:(int)arg1;
- (id)cdnDataUrl;
- (void)setCdnDataUrl:(id)arg1;
- (id)cdnDataKey;
- (void)setCdnDataKey:(id)arg1;
- (int)cdnMiddleDataFileType;
- (void)setCdnMiddleDataFileType:(int)arg1;
- (unsigned long long)middleDataSize;
- (void)setMiddleDataSize:(unsigned long long)arg1;
- (id)middleDataMd5;
- (void)setMiddleDataMd5:(id)arg1;
- (id)cdnMiddleDataUrl;
- (void)setCdnMiddleDataUrl:(id)arg1;
- (id)cdnMiddleDataKey;
- (void)setCdnMiddleDataKey:(id)arg1;
- (id)assetID;
- (void)setAssetID:(id)arg1;
- (BOOL)isNeedUploadRawData;
- (void)setIsNeedUploadRawData:(BOOL)arg1;
- (double)thumbWidth;
- (void)setThumbWidth:(double)arg1;
- (double)thumbHeight;
- (void)setThumbHeight:(double)arg1;
- (unsigned long long)thumbSize;
- (void)setThumbSize:(unsigned long long)arg1;
- (unsigned long long)dataSize;
- (void)setDataSize:(unsigned long long)arg1;
- (unsigned int)duration;
- (void)setDuration:(unsigned int)arg1;
- (BOOL)isSmallImage;
- (void)setIsSmallImage:(BOOL)arg1;
- (void)setStreamWebUrl:(id)arg1;
- (id)streamDataUrl;
- (void)setStreamDataUrl:(id)arg1;
- (id)streamLowbandUrl;
- (void)setStreamLowbandUrl:(id)arg1;
- (id)songLyric;
- (void)setSongLyric:(id)arg1;
- (id)songAlbumUrl;
- (void)setSongAlbumUrl:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)dataExt;
- (void)setDataExt:(id)arg1;
- (id)streamId;
- (void)setStreamId:(id)arg1;
- (int)dataStatus;
- (void)setDataStatus:(int)arg1;
- (id)thumbMd5;
- (void)setThumbMd5:(id)arg1;
- (id)thumbHead256Md5;
- (void)setThumbHead256Md5:(id)arg1;
- (id)dataMd5;
- (void)setDataMd5:(id)arg1;
- (id)dataHead256Md5;
- (void)setDataHead256Md5:(id)arg1;
- (id)sourceThumbPath;
- (void)setSourceThumbPath:(id)arg1;
- (id)sourceDataPath;
- (void)setSourceDataPath:(id)arg1;
- (id)sourceMiddleDataPath;
- (void)setSourceMiddleDataPath:(id)arg1;
- (id)dataSrcName;
- (void)setDataSrcName:(id)arg1;
- (id)dataSrcNamePost;
- (void)setDataSrcNamePost:(id)arg1;
- (id)dataSrcHeadUrl;
- (void)setDataSrcHeadUrl:(id)arg1;
- (id)dataSrcTime;
- (void)setDataSrcTime:(id)arg1;
- (id)dataSrc;
- (void)setDataSrc:(id)arg1;
- (id)locItem;
- (void)setLocItem:(id)arg1;
- (id)urlItem;
- (void)setUrlItem:(id)arg1;
- (id)productItem;
- (void)setProductItem:(id)arg1;
- (id)tvItem;
- (void)setTvItem:(id)arg1;
- (double)nodeHeight;
- (void)setNodeHeight:(double)arg1;
- (id)streamVideoItem;
- (void)setStreamVideoItem:(id)arg1;
- (id)statExtStr;
- (void)setStatExtStr:(id)arg1;
- (id)canvasPageXml;
- (void)setCanvasPageXml:(id)arg1;
- (int)illegalType;
- (void)setIllegalType:(int)arg1;
- (id)srcChatName;
- (void)setSrcChatName:(id)arg1;
- (int)isChatRoom;
- (void)setIsChatRoom:(int)arg1;
- (long long)srcMsgSvrId;
- (void)setSrcMsgSvrId:(long long)arg1;
- (unsigned int)srcMsgLocalId;
- (void)setSrcMsgLocalId:(unsigned int)arg1;
- (unsigned int)srcMsgCreateTime;
- (void)setSrcMsgCreateTime:(unsigned int)arg1;
- (id)srcMsgContent;
- (void)setSrcMsgContent:(id)arg1;
- (id)dataList;
- (void)setDataList:(id)arg1;
- (id)weAppItem;
- (void)setWeAppItem:(id)arg1;
- (id)favBrandMpVideoItem;
- (void)setFavBrandMpVideoItem:(id)arg1;
- (id)emojiItem;
- (void)setEmojiItem:(id)arg1;
- (id)authkey;
- (void)setAuthkey:(id)arg1;
- (BOOL)isFromSingleMessage;
- (void)setIsFromSingleMessage:(BOOL)arg1;
- (id)messageUUID;
- (void)setMessageUUID:(id)arg1;
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
- (id)finderShopWindowShare;
- (void)setFinderShopWindowShare:(id)arg1;
- (id)finderProductShare;
- (void)setFinderProductShare:(id)arg1;
- (id)musicShareItem;
- (void)setMusicShareItem:(id)arg1;
- (id)tingListenItem;
- (void)setTingListenItem:(id)arg1;
- (id)tingCategoryItem;
- (void)setTingCategoryItem:(id)arg1;
- (id)referMsgItem;
- (void)setReferMsgItem:(id)arg1;
- (id)liteAppSharedItem;
- (void)setLiteAppSharedItem:(id)arg1;
- (id)livePhoto;
- (void)setLivePhoto:(id)arg1;
- (id)link;
- (void)setLink:(id)arg1;
- (id)brandId;
- (void)setBrandId:(id)arg1;
- (id)tpThumbUrl;
- (void)setTpThumbUrl:(id)arg1;
- (id)tpThumbAeskey;
- (void)setTpThumbAeskey:(id)arg1;
- (id)tpDataUrl;
- (void)setTpDataUrl:(id)arg1;
- (id)tpAesKey;
- (void)setTpAesKey:(id)arg1;
- (void).cxx_destruct;
@end
