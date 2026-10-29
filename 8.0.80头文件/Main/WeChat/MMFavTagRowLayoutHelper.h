@interface MMFavTagRowLayoutHelper : NSObject
+ (double)singleLineTagRowHeight;
+ (double)tagButtonWidthForName:(id)arg1;
+ (double)totalWidthForTagList:(id)arg1;
+ (id)tagButtonsForTagList:(id)arg1 host:(id)arg2;
+ (unsigned long long)wrappedLineCountForTagList:(id)arg1 containerWidth:(double)arg2;
+ (double)wrappedTagAreaHeightForTagList:(id)arg1 containerWidth:(double)arg2 lineRowHeight:(double)arg3;
+ (unsigned long long)flowingLineCountForTagList:(id)arg1 firstLineMaxWidth:(double)arg2 fullLineWidth:(double)arg3;
+ (double)flowingTagAreaHeightForTagList:(id)arg1 firstLineMaxWidth:(double)arg2 fullLineWidth:(double)arg3 lineRowHeight:(double)arg4 wrapRowGap:(double)arg5;
+ (double)layoutFlowingTagList:(id)arg1 onView:(id)arg2 firstLineOriginX:(double)arg3 firstLineOriginY:(double)arg4 firstLineMaxWidth:(double)arg5 fullLineOriginX:(double)arg6 fullLineWidth:(double)arg7 lineRowHeight:(double)arg8 wrapRowGap:(double)arg9 host:(id)arg10;
+ (double)layoutInlineTagList:(id)arg1 onView:(id)arg2 originX:(double)arg3 originY:(double)arg4 maxWidth:(double)arg5 lineRowHeight:(double)arg6 host:(id)arg7;
+ (double)layoutWrappedTagList:(id)arg1 onView:(id)arg2 originX:(double)arg3 originY:(double)arg4 containerWidth:(double)arg5 lineRowHeight:(double)arg6 host:(id)arg7;
@end
