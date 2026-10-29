@interface WCFinderNpsSurveyTaskDataWrap : NSObject <PBCoding>
{
    unsigned int _surveyStatus; // +0x8
    FinderNpsSurveyTaskConf * _surveyTaskConf; // +0x10
    FinderNpsSurveyInfo * _surveyInfo; // +0x18
    NSString * _shownInFeedID; // +0x20
    NSString * _boundToFeedID; // +0x28
    FinderNpsSurveyQuestion * _showingSurveyQuestion; // +0x30
    NSMutableArray * _trackInfoList; // +0x38
    unsigned long long _surveyShownCount; // +0x40
    unsigned long long _triggerSource; // +0x48
    unsigned long long _startShowTimestamp; // +0x50
    unsigned long long _endShowTimestamp; // +0x58
    unsigned long long _showTimestamp; // +0x60
    unsigned long long _selectTimestamp; // +0x68
}
+ (void)PBArrayAdd_surveyTaskConf;
+ (void)PBArrayAdd_surveyInfo;
+ (void)PBArrayAdd_surveyStatus;
+ (void)PBArrayAdd_shownInFeedID;
+ (void)PBArrayAdd_boundToFeedID;
+ (void)initialize;
+ (int)thumbFeedTypeForDataItem:(id)arg1;
- (id)getPBPropertyTable;
- (id)trackInfoList;
- (BOOL)isSurveyHasShownInFeedID:(id)arg1;
- (BOOL)isSurveyHasBoundToFeedID:(id)arg1;
- (BOOL)isAvailableSurveyWithTriggerEvent:(long long)arg1 contextInfo:(id)arg2;
- (BOOL)isAvailableCommentSurveyWithTriggerEvent:(long long)arg1 contextInfo:(id)arg2;
- (id)firstSurveyQuestion;
- (id)surveyQuestionWithID:(unsigned long long)arg1;
- (id)genReportKVInfoJsonWithContextInfo:(id)arg1;
- (id)surveyTaskConf;
- (void)setSurveyTaskConf:(id)arg1;
- (id)surveyInfo;
- (void)setSurveyInfo:(id)arg1;
- (unsigned int)surveyStatus;
- (void)setSurveyStatus:(unsigned int)arg1;
- (id)shownInFeedID;
- (void)setShownInFeedID:(id)arg1;
- (id)boundToFeedID;
- (void)setBoundToFeedID:(id)arg1;
- (id)showingSurveyQuestion;
- (void)setShowingSurveyQuestion:(id)arg1;
- (void)setTrackInfoList:(id)arg1;
- (unsigned long long)surveyShownCount;
- (void)setSurveyShownCount:(unsigned long long)arg1;
- (unsigned long long)triggerSource;
- (void)setTriggerSource:(unsigned long long)arg1;
- (unsigned long long)startShowTimestamp;
- (void)setStartShowTimestamp:(unsigned long long)arg1;
- (unsigned long long)endShowTimestamp;
- (void)setEndShowTimestamp:(unsigned long long)arg1;
- (unsigned long long)showTimestamp;
- (void)setShowTimestamp:(unsigned long long)arg1;
- (unsigned long long)selectTimestamp;
- (void)setSelectTimestamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
