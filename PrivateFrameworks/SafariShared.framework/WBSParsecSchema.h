/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecSchema : NSObject {
    NSError * _associatedError;
    Class  _expectedClass;
    BOOL  _optional;
    id /* block */  _specializedSchemaBlock;
    id /* block */  _validationBlock;
}

@property (nonatomic, retain) NSError *associatedError;
@property (nonatomic, retain) Class expectedClass;
@property (getter=isOptional, nonatomic) BOOL optional;
@property (nonatomic, copy) id /* block */ specializedSchemaBlock;
@property (nonatomic, copy) id /* block */ validationBlock;

+ (id)schemaForArrayWithElementSchema:(id)arg1;
+ (id)schemaForArrayWithElementSchema:(id)arg1 associatedError:(id)arg2;
+ (id)schemaForArrayWithElementSchema:(id)arg1 associatedError:(id)arg2 isOptional:(BOOL)arg3;
+ (id)schemaForDictionaryWithStructure:(id)arg1;
+ (id)schemaForDictionaryWithStructure:(id)arg1 associatedError:(id)arg2;
+ (id)schemaForDictionaryWithStructure:(id)arg1 associatedError:(id)arg2 isOptional:(BOOL)arg3;
+ (id)schemaWithConstantValue:(id)arg1;
+ (id)schemaWithExpectedClass:(Class)arg1;
+ (id)schemaWithExpectedClass:(Class)arg1 associatedError:(id)arg2;
+ (id)schemaWithExpectedClass:(Class)arg1 associatedError:(id)arg2 isOptional:(BOOL)arg3;

- (void).cxx_destruct;
- (id)_initWithExpectedClass:(Class)arg1 associatedError:(id)arg2 isOptional:(BOOL)arg3;
- (BOOL)_validateChild:(id)arg1 ofParent:(id)arg2 withParentAssociatedError:(id)arg3 errorHandler:(id /* block */)arg4;
- (id)associatedError;
- (Class)expectedClass;
- (BOOL)isOptional;
- (void)setAssociatedError:(id)arg1;
- (void)setExpectedClass:(Class)arg1;
- (void)setOptional:(BOOL)arg1;
- (void)setSpecializedSchemaBlock:(id /* block */)arg1;
- (void)setValidationBlock:(id /* block */)arg1;
- (id /* block */)specializedSchemaBlock;
- (void)validateObject:(id)arg1 withErrorHandler:(id /* block */)arg2;
- (id /* block */)validationBlock;

@end