@interface MMWebviewPrefetchResult : MMObject
{
    unsigned int _prefetchResourseOption; // +0x8
    unsigned int _maxCacheTime; // +0xc
    unsigned int _lastModifyTime; // +0x10
    unsigned int _bizScene; // +0x14
    unsigned int _subBizScene; // +0x18
    NSString * _urlString; // +0x20
    NSString * _blankPlaceHolderUrl; // +0x28
    NSString * _htmlString; // +0x30
    unsigned long long _version; // +0x38
    NSDictionary * _docRespHeader; // +0x40
}
- (id)description;
- (id)urlString;
- (void)setUrlString:(id)arg1;
- (id)blankPlaceHolderUrl;
- (void)setBlankPlaceHolderUrl:(id)arg1;
- (id)htmlString;
- (void)setHtmlString:(id)arg1;
- (unsigned int)prefetchResourseOption;
- (void)setPrefetchResourseOption:(unsigned int)arg1;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned int)maxCacheTime;
- (void)setMaxCacheTime:(unsigned int)arg1;
- (unsigned int)lastModifyTime;
- (void)setLastModifyTime:(unsigned int)arg1;
- (id)docRespHeader;
- (void)setDocRespHeader:(id)arg1;
- (unsigned int)bizScene;
- (void)setBizScene:(unsigned int)arg1;
- (unsigned int)subBizScene;
- (void)setSubBizScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end

