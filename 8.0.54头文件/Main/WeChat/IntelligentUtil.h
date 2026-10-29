@interface IntelligentUtil : NSObject
+ (double)distanceFromPoint:(CGPoint)arg1 to:(CGPoint)arg2;
+ (id)GenNoResultViewForKeyword:(id)arg1 width:(double)arg2 height:(double)arg3 prefix:(id)arg4 suffix:(id)arg5 textColor:(id)arg6;
+ (id)GenNoResultViewForKeyword:(id)arg1 width:(double)arg2 height:(double)arg3 prefix:(id)arg4 suffix:(id)arg5 textColor:(id)arg6 textFontSize:(double)arg7;
+ (id)GenIntelligentSearchLabelForKeyword:(id)arg1 width:(double)arg2 height:(double)arg3 prefix:(id)arg4 suffix:(id)arg5 textColor:(id)arg6 highlightColor:(id)arg7;
+ (id)GenIntelligentSearchLabelForKeyword:(id)arg1 width:(double)arg2 height:(double)arg3 prefix:(id)arg4 suffix:(id)arg5 textColor:(id)arg6 highlightColor:(id)arg7 textFontSize:(double)arg8;
+ (id)getNoResultPrefixStrWithSearchType:(unsigned int)arg1;
+ (id)getNoResultSuffixStrWithSearchType:(unsigned int)arg1;
+ (id)getSearchResultCountLabelPrefixStrWithSearchType:(unsigned int)arg1;
+ (id)getSearchResultCountLabelSuffixStrWithSearchType:(unsigned int)arg1;
+ (Mat)cvMatWithImage:(id)arg1;
+ (id)getTargetRectImageFromOriginalImage:(id)arg1 targetRect:(CGRect)arg2;
+ (id)convertNumberArrToStringArr:(id)arg1;
+ (void)showInfoView:(id)arg1 imageScrollView:(id)arg2 searchText:(id)arg3 dicLocateOcrTextPoint:(id)arg4 operateOcrTextPointBlcok:(id /* block */)arg5;
+ (id)getMessageIDFromMsg:(id)arg1;
+ (unsigned int)getReportIntelligentMsgDoClickMediaWithWrap:(id)arg1;
+ (unsigned int)getSearchMsgTypeWithMsg:(id)arg1;
+ (unsigned int)getCurrentTimeUsec;
@end

