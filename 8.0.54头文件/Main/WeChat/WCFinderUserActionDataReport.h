@interface WCFinderUserActionDataReport : NSObject
+ (void)finderNotInterested:(id)arg1 subType:(long long)arg2;
+ (void)finderContentFeedback:(id)arg1;
+ (void)finderCommentFeedback:(long long)arg1 commentUserName:(id)arg2 currUI:(id)arg3;
+ (void)finderProfileFeedbackUserName:(id)arg1 currUI:(id)arg2;
+ (void)finderFavoriteAction:(id)arg1;
+ (void)finderCommentCloseAction:(id)arg1 isClose:(BOOL)arg2;
+ (void)finderVideoMuteAction:(id)arg1 isMute:(BOOL)arg2;
+ (id)feedIDUserNameTypeRecommendReportData:(id)arg1;
+ (id)feedIDUserNameRecommendTypeReportData:(id)arg1;
+ (id)feedIDUserNameTypeReportData:(id)arg1;
+ (id)feedIDUserNameReportData:(id)arg1;
+ (id)likeAndCommentReportData:(id)arg1;
+ (id)currentLikeAndCommentReportData:(id)arg1;
+ (id)friendLikeAndCommentReportData:(id)arg1;
+ (id)authorLikeAndCommentReportData:(id)arg1;
+ (void)finderSearchBarClickAction:(long long)arg1;
+ (void)finderBrowserTrackAtEnterWithContextID:(id)arg1;
+ (void)finderBrowserTrackAtCreateWithContextID:(id)arg1;
+ (void)finderBrowserTrackAtCGIStratWithContextID:(id)arg1;
+ (void)finderBrowserTrackAtCGITypeWithContextID:(id)arg1 type:(id)arg2;
+ (void)finderBrowserTrackAtCGIEndWithContextID:(id)arg1;
+ (void)finderBrowserTrackAtShowResultWithContextID:(id)arg1;
+ (void)finderBrowserTrackAtExitWithContextID:(id)arg1;
+ (void)finderBrowserTrackWithContextID:(id)arg1 action:(id)arg2;
@end

