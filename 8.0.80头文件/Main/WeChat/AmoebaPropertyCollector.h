@interface AmoebaPropertyCollector : NSObject
+ (id)collectPageProperty:(id)arg1;
+ (id)collectViewProperty:(id)arg1;
+ (id)getViewPosi:(id)arg1;
+ (id)getViewTextExcludeTextView:(id)arg1;
+ (id)getViewText:(id)arg1;
+ (id)getSuperViewText:(id)arg1 deep:(unsigned long long)arg2;
+ (id)getChildViewText:(id)arg1 deep:(unsigned long long)arg2;
+ (id)getRealViewText:(id)arg1;
+ (id)getViewType:(id)arg1;
+ (id)getObjAllProperties:(id)arg1;
@end
