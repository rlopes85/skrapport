\begin{figure}
	\centering
	\fbox{\Huge a figure}
	\caption{Figure with no placement specifier}
	\label{fig:no-plac}
\end{figure}
\begin{figure*}
	\centering
	\fbox{\Huge a figure}
	\caption{Figure, starred}
	\label{fig:star}
\end{figure*}
\begin{table}
	\centering
	\caption{Table with no placement specifier}
	\label{tab:no-plac}
	\fbox{\Huge a table}
\end{table}
\begin{table*}
	\centering
	\caption{Table, starred}
	\label{tab:star}
	\fbox{\Huge a table}
\end{table*}

\begin{figure}[p]
	\centering
	\fbox{\Huge a figure}
	\caption{Figure with placement specifier}
	\label{fig:plac}
\end{figure}
\begin{table}[p]
	\centering
	\caption{Table with placement specifier}
	\label{tab:plac}
	\fbox{\Huge a table}
\end{table}

\begin{figure}
	\begin{figcenter}
		\fbox{\hspace*{\textwidth}}
	\end{figcenter}
	\caption{Page-wide \texttt{figcenter} figure}
	\label{fig:center-wide}
\end{figure}
\begin{figure}
	\begin{figcenter}
		\fbox{\hspace*{4em}}
	\end{figcenter}
	\caption{Narrow \texttt{figcenter} figure}
	\label{fig:center-narow}
\end{figure}
