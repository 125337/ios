@interface FTSWebSearchClickReportItem : NSObject
{
    unsigned int _scene; // +0x8
    unsigned int _docPos; // +0xc
    unsigned int _typePos; // +0x10
    unsigned int _isHomePage; // +0x14
    unsigned int _expand1; // +0x18
    unsigned int _clickType; // +0x1c
    NSString * _searchID; // +0x20
    NSString * _recommendID; // +0x28
    unsigned long long _businessType; // +0x30
    NSString * _docID; // +0x38
    unsigned long long _timeStamp; // +0x40
    NSString * _suggestionID; // +0x48
    NSString * _expand2; // +0x50
    NSString * _logString; // +0x58
    NSString * _cdnHttpHead; // +0x60
    NSString * _videoUrl; // +0x68
    NSString * _byPass; // +0x70
}
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithLogString:(id)arg1;
- (BOOL)isValid;
- (id)description;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)searchID;
- (void)setSearchID:(id)arg1;
- (id)recommendID;
- (void)setRecommendID:(id)arg1;
- (unsigned long long)businessType;
- (void)setBusinessType:(unsigned long long)arg1;
- (id)docID;
- (void)setDocID:(id)arg1;
- (unsigned int)docPos;
- (void)setDocPos:(unsigned int)arg1;
- (unsigned int)typePos;
- (void)setTypePos:(unsigned int)arg1;
- (unsigned int)isHomePage;
- (void)setIsHomePage:(unsigned int)arg1;
- (unsigned long long)timeStamp;
- (void)setTimeStamp:(unsigned long long)arg1;
- (unsigned int)expand1;
- (void)setExpand1:(unsigned int)arg1;
- (id)suggestionID;
- (void)setSuggestionID:(id)arg1;
- (unsigned int)clickType;
- (void)setClickType:(unsigned int)arg1;
- (id)expand2;
- (void)setExpand2:(id)arg1;
- (id)logString;
- (void)setLogString:(id)arg1;
- (id)cdnHttpHead;
- (void)setCdnHttpHead:(id)arg1;
- (id)videoUrl;
- (void)setVideoUrl:(id)arg1;
- (id)byPass;
- (void)setByPass:(id)arg1;
- (void).cxx_destruct;
@end

