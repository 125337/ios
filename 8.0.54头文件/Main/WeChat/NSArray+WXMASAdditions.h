@interface NSArray (WXMASAdditions)
- (id)mas_makeConstraints:(id /* block */)arg1;
- (id)mas_updateConstraints:(id /* block */)arg1;
- (id)mas_remakeConstraints:(id /* block */)arg1;
- (void)mas_distributeViewsAlongAxis:(unsigned long long)arg1 withFixedSpacing:(double)arg2 leadSpacing:(double)arg3 tailSpacing:(double)arg4;
- (void)mas_distributeViewsAlongAxis:(unsigned long long)arg1 withFixedItemLength:(double)arg2 leadSpacing:(double)arg3 tailSpacing:(double)arg4;
- (id)mas_commonSuperviewOfViews;
@end

