@interface WCWebImageSearchInfo : MMObject
{
    BOOL _skipImageUploading; // +0x8
    unsigned long long _searchScene; // +0x10
    NSString * _parentSearchId; // +0x18
    NSString * _extInfo; // +0x20
    NSString * _recommendQuery; // +0x28
    NSString * _reportInfoFor33399; // +0x30
    unsigned long long _mpScene; // +0x38
    unsigned long long _mpView; // +0x40
    unsigned long long _mpEnterId; // +0x48
    NSString * _mpSessionId; // +0x50
    unsigned long long _recommendQueryPullType; // +0x58
    NSString * _reportSearchStatusInfoFor34875; // +0x60
    NSString * _reportExtInfoFor34875; // +0x68
}
+ (id)imageSearchInfoFromDictionary:(id)arg1;
- (void)report34875WithActionType:(unsigned long long)arg1;
- (unsigned long long)searchScene;
- (void)setSearchScene:(unsigned long long)arg1;
- (id)parentSearchId;
- (void)setParentSearchId:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (BOOL)skipImageUploading;
- (void)setSkipImageUploading:(BOOL)arg1;
- (id)recommendQuery;
- (void)setRecommendQuery:(id)arg1;
- (id)reportInfoFor33399;
- (void)setReportInfoFor33399:(id)arg1;
- (unsigned long long)mpScene;
- (void)setMpScene:(unsigned long long)arg1;
- (unsigned long long)mpView;
- (void)setMpView:(unsigned long long)arg1;
- (unsigned long long)mpEnterId;
- (void)setMpEnterId:(unsigned long long)arg1;
- (id)mpSessionId;
- (void)setMpSessionId:(id)arg1;
- (unsigned long long)recommendQueryPullType;
- (void)setRecommendQueryPullType:(unsigned long long)arg1;
- (id)reportSearchStatusInfoFor34875;
- (void)setReportSearchStatusInfoFor34875:(id)arg1;
- (id)reportExtInfoFor34875;
- (void)setReportExtInfoFor34875:(id)arg1;
- (void).cxx_destruct;
@end
