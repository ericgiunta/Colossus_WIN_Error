#' example
#' \code{RunCoxRegression} example
#'
#' @param Term_n term numbers for each element of the model
#' @param tform subterm type for each element of the model
#'
#' @return returns
#' @export
#'
#' @importFrom rlang .data

RunCoxRegression <- function(Term_n=rep(0,length(names)), tform=rep("loglin",length(names))){
    e <- cox_ph_transition(Term_n,tform)
    ;
    return (e)
}
