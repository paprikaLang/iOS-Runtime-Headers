/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKAnnotationImageHelper : NSObject

+ (void)_drawFilledShapeImageForAnnotation:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inContext:(struct CGContext { }*)arg3;
+ (void)_drawImageForPath:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inContext:(struct CGContext { }*)arg3;
+ (void)_drawImageForSignature:(id)arg1 withFillColor:(id)arg2 scale:(float)arg3 pathOffset:(struct CGPoint { double x1; double x2; })arg4 inContext:(struct CGContext { }*)arg5;
+ (struct CGImage { }*)createImageOfAnnotation:(id)arg1 withScale:(float)arg2;
+ (id)imageForShapeTag:(int)arg1;
+ (id)imageOfSize:(struct CGSize { double x1; double x2; })arg1 forAnnotation:(id)arg2;
+ (id)imageOfSize:(struct CGSize { double x1; double x2; })arg1 forPath:(id)arg2;
+ (id)imageOfSize:(struct CGSize { double x1; double x2; })arg1 withFillColor:(id)arg2 forSignature:(id)arg3;

@end