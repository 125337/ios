@interface WCFinderMedia : NSObject <PBCoding, WCTColumnCoding>
{
    BOOL _isLowBitRateMedia; // +0x8
    BOOL _feedIsRisky; // +0x9
    BOOL _hasUploadCDNSuc; // +0xa
    NSString * _title; // +0x10
    NSArray * _mediaArray; // +0x18
    NSArray * _selectedAssetIDs; // +0x20
    unsigned long long _mediaType; // +0x28
    FinderLocation * _location; // +0x30
    FinderExtendedReading * _extReading; // +0x38
    FinderTopic * _topic; // +0x40
    NSString * _contentHighlightString; // +0x48
    WCFinderParseContentModel * _parseContentModel; // +0x50
    NSMutableArray * _mentionContactArray; // +0x58
    NSMutableArray * _mentionNicknameArray; // +0x60
    WCFinderObjectBGMInfo * _finderObjectBGMInfo; // +0x68
    FinderFromAppInfo * _fromAppInfo; // +0x70
    FinderVideoTemplateInfo * _videoTemplateInfo; // +0x78
    NSString * _flowCardDesc; // +0x80
    NSMutableArray * _shortTitleArray; // +0x88
    NSString * _highLightDescription; // +0x90
    NSString * _liveDescriptionExtend; // +0x98
    unsigned long long _LbsFlagType; // +0xa0
    unsigned long long _subLbsFlagType; // +0xa8
    double _feedLatitude; // +0xb0
    double _feedLongitude; // +0xb8
}
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_mediaArray;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_location;
+ (void)PBArrayAdd_extReading;
+ (void)PBArrayAdd_topic;
+ (void)PBArrayAdd_contentHighlightString;
+ (void)PBArrayAdd_parseContentModel;
+ (void)PBArrayAdd_mentionContactArray;
+ (void)PBArrayAdd_mentionNicknameArray;
+ (void)PBArrayAdd_finderObjectBGMInfo;
+ (void)PBArrayAdd_fromAppInfo;
+ (void)PBArrayAdd_videoTemplateInfo;
+ (void)PBArrayAdd_flowCardDesc;
+ (void)PBArrayAdd_shortTitleArray;
+ (void)PBArrayAdd_LbsFlagType;
+ (void)PBArrayAdd_subLbsFlagType;
+ (void)PBArrayAdd_feedLatitude;
+ (void)PBArrayAdd_feedLongitude;
+ (void)PBArrayAdd_highLightDescription;
+ (void)PBArrayAdd_liveDescriptionExtend;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
+ (id)finderMediaFromObject:(id)arg1;
+ (void)backfillReportInfoFromOld:(id)arg1 newModel:(id)arg2;
- (id)getPBPropertyTable;
- (void)setFeedLocation:(CLLocationCoordinate2D)arg1;
- (CLLocationCoordinate2D)feedLocation;
- (id)archivedWCTValue;
- (id)currentMedia;
- (id)init;
- (id)genObjectDesc;
- (id)description;
- (BOOL)isLowBitRateMedia;
- (void)setfeedIsRisky:(BOOL)arg1;
- (id)postShortTitle;
- (void)setPostShortTitle:(id)arg1;
- (id)getDisplayLocation;
- (BOOL)isCompleteLocalRes;
- (id)getMaterialLbsLocation;
- (BOOL)hasPlayMusicInfo;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)mediaArray;
- (void)setMediaArray:(id)arg1;
- (id)selectedAssetIDs;
- (void)setSelectedAssetIDs:(id)arg1;
- (unsigned long long)mediaType;
- (void)setMediaType:(unsigned long long)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (id)extReading;
- (void)setExtReading:(id)arg1;
- (id)topic;
- (void)setTopic:(id)arg1;
- (id)contentHighlightString;
- (void)setContentHighlightString:(id)arg1;
- (id)parseContentModel;
- (void)setParseContentModel:(id)arg1;
- (id)mentionContactArray;
- (void)setMentionContactArray:(id)arg1;
- (id)mentionNicknameArray;
- (void)setMentionNicknameArray:(id)arg1;
- (id)finderObjectBGMInfo;
- (void)setFinderObjectBGMInfo:(id)arg1;
- (id)fromAppInfo;
- (void)setFromAppInfo:(id)arg1;
- (id)videoTemplateInfo;
- (void)setVideoTemplateInfo:(id)arg1;
- (id)flowCardDesc;
- (void)setFlowCardDesc:(id)arg1;
- (void)setIsLowBitRateMedia:(BOOL)arg1;
- (BOOL)feedIsRisky;
- (void)setFeedIsRisky:(BOOL)arg1;
- (id)shortTitleArray;
- (void)setShortTitleArray:(id)arg1;
- (BOOL)hasUploadCDNSuc;
- (void)setHasUploadCDNSuc:(BOOL)arg1;
- (id)highLightDescription;
- (void)setHighLightDescription:(id)arg1;
- (id)liveDescriptionExtend;
- (void)setLiveDescriptionExtend:(id)arg1;
- (unsigned long long)LbsFlagType;
- (void)setLbsFlagType:(unsigned long long)arg1;
- (unsigned long long)subLbsFlagType;
- (void)setSubLbsFlagType:(unsigned long long)arg1;
- (double)feedLatitude;
- (void)setFeedLatitude:(double)arg1;
- (double)feedLongitude;
- (void)setFeedLongitude:(double)arg1;
- (void).cxx_destruct;
@end
